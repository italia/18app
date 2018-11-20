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
            container.Register<IShopsService, ShopsService>();
            container.Register<ICouponsService, CouponsService>();
            container.Register<IInfoService, InfoService>();
            container.Register<ILoginService, LoginService>();
            container.Register<INotificationsService, NotificationsService>();
            container.Register<IUserInfoService, UserInfoService>();
        }

        public static TTypeToResolve Resolve<TTypeToResolve>()
        {
            return (TTypeToResolve)container.Resolve(typeof(TTypeToResolve));
        }
    }
}
