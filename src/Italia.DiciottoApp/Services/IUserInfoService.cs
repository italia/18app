using Italia.DiciottoApp.DTOs;
using Italia.DiciottoApp.Models;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.Services
{
    interface IUserInfoService
    {
        Task<ServiceResult<BorsellinoBean>> GetBorsellinoAsync();

        Task<ServiceResult<BeneficiarioBean>> SetPresaVisioneAsync(bool confirmed);

        Task<ServiceResult<string>> GetPresaVisioneAsync();
    }
}
