const {reloadApp} = require('detox-expo-helpers');

describe('Drawer', () => {
    before(async () => {
        await reloadApp();
    });

    it('should show drawer component after profile tap', async () => {
        await element(by.id('login-spid')).tap();
        await waitFor(element(by.id('home-screen')))
            .toBeVisible()
            .withTimeout(2000);
        await element(by.id('header-profile-button'))
            .atIndex(0)
            .tap();

        await waitFor(element(by.id('drawer')))
            .toBeVisible()
            .withTimeout(2000);

        await expect(element(by.id('drawer'))).toBeVisible();
    });
});
