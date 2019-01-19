using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Italia.DiciottoApp.Data;
using Italia.DiciottoApp.Models;

namespace Italia.DiciottoApp.Services
{
    public class FakeInfoService : IInfoService
    {
        public IEnumerable<InfoContent> GetInfoList(string findText = null, bool spidOnly = false)
        {
            InfoDb infoDb = new InfoDb();

            var fakeInfoList = spidOnly ? infoDb.Data.Where(x => x.Header.Contains("SPID")) : infoDb.Data;

            if (!string.IsNullOrWhiteSpace(findText))
            {
                string upperFindText = findText.ToUpper();
                fakeInfoList = fakeInfoList.Where(x => x.Header.ToUpper().Contains(upperFindText) || x.Title.ToUpper().Contains(upperFindText) || x.Text.ToUpper().Contains(upperFindText));
            }

            fakeInfoList = fakeInfoList.OrderBy(x => x.HeaderOrderIndex).ThenBy(x => x.TitleOrderIndex);

            return fakeInfoList;
        }
    }
}