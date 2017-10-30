const {reloadApp} = require('detox-expo-helpers');

describe('Login screen', () => {
    before(async () => {
        await reloadApp();
    });

    it('should be shown as first screen', async () => {
        await expect(element(by.id('login-screen'))).toBeVisible();
    });

    it('should have a login-spid button', async () => {
        await expect(element(by.id('login-spid'))).toBeVisible();
    });

    it('should be replaced by home-screen when login-spid is tapped', async () => {
        await element(by.id('login-spid')).tap();
        await waitFor(element(by.id('home-screen')))
            .toBeVisible()
            .withTimeout(2000);

        await expect(element(by.id('home-screen')).atIndex(0)).toBeVisible();
        await expect(element(by.id('drawer'))).toBeNotVisible();
    });
});
