using System;

namespace Italia.DiciottoApp.SimpleIoc
{
    public interface IContainer
    {
        void Register<TTypeToResolve, TConcrete>(LifeCycle lifeCycle = LifeCycle.Singleton);

        TTypeToResolve Resolve<TTypeToResolve>();

        object Resolve(Type typeToResolve);
    }
}