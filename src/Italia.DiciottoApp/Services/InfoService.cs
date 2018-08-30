using System;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;
using Italia.DiciottoApp.Models;

namespace Italia.DiciottoApp.Services
{
    public class InfoService : IInfoService
    {
        public async Task<IEnumerable<InfoContent>> GetInfoListAsync(string findText = null, bool spidOnly = false)
        {
            IEnumerable<InfoContent> infoList;

            // TODO: Get info from 18App REST service
            var fakeInfoService = new FakeInfoService();
            infoList = await fakeInfoService.GetInfoListAsync(findText, spidOnly);

            return infoList;
        }
    }
}
