﻿using Italia.DiciottoApp.Models;
using System;
using System.Collections.Generic;
using System.Text;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.Services
{
    interface IInfoService
    {
        IEnumerable<InfoContent> GetInfoList(string findText = null, bool spidOnly = false);
    }
}
