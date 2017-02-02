using Microsoft.Owin;
using Owin;

[assembly: OwinStartupAttribute(typeof(mvaMusicStore.Startup))]
namespace mvaMusicStore
{
    public partial class Startup
    {
        public void Configuration(IAppBuilder app)
        {
            ConfigureAuth(app);
        }
    }
}
