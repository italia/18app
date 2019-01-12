using Italia.DiciottoApp.DTOs;
using Italia.DiciottoApp.Models;
using System.Net;
using System.Threading.Tasks;

namespace Italia.DiciottoApp.Services
{
    interface IUserInfoService
    {
        Task<ServiceResult<BorsellinoBean>> GetBorsellinoAsync();

        Task<ServiceResult<BeneficiarioBean>> SetPresaVisioneAsync(BeneficiarioBean beneficiarioBean, Cookie fedSecureToken, bool confirmed);

        Task<ServiceResult<string>> GetPresaVisioneAsync(Cookie fedSecureToken);
    }
}