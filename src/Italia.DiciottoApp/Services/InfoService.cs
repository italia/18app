using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Italia.DiciottoApp.Data;
using Italia.DiciottoApp.Models;

namespace Italia.DiciottoApp.Services
{
    public class InfoService : IInfoService
    {
        public IEnumerable<InfoContent> GetInfoList(string findText = null, bool spidOnly = false)
        {
            // TBD: Get info from 18App REST service
            InfoDb infoDb = new InfoDb();

            var infoList = spidOnly ? infoDb.Data.Where(x => x.Header.Contains("SPID")) : infoDb.Data;

            if (!string.IsNullOrWhiteSpace(findText))
            {
                string upperFindText = findText.ToUpper();
                infoList = infoList.Where(x => x.Header.ToUpper().Contains(upperFindText) || x.Title.ToUpper().Contains(upperFindText) || x.Text.ToUpper().Contains(upperFindText));
            }

            infoList = infoList.OrderBy(x => x.HeaderOrderIndex).ThenBy(x => x.TitleOrderIndex);

            return infoList;
        }
    }
}
