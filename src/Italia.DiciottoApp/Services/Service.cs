using Italia.DiciottoApp.SimpleIoc;
using System;
using System.Collections.Generic;
using System.Text;

namespace Italia.DiciottoApp.Services
{
    public static class Service
    {
        static readonly IContainer container = new SimpleIocContainer();

        static Service()
        {
            container.Register<IShopsService, ShopService>();
        }

        public static TTypeToResolve Resolve<TTypeToResolve>()
        {
            return (TTypeToResolve)container.Resolve(typeof(TTypeToResolve));
        }
    }
}
