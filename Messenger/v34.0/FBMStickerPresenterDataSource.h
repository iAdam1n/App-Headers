/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBMStickerPresenterDataSource <NSObject>
@required
-(id)analyticsExtrasForStickerPresenter:(id)arg1;
-(BOOL)stickerPresenter:(id)arg1 isDownloadedStickerPack:(long long)arg2;
-(id)stickerPresenter:(id)arg1 stickerPackAtTabIndex:(long long)arg2;
-(id)recentStickerPacksForStickerPresenter:(id)arg1;
-(unsigned long long)recentStickerTabIndexForPresenter:(id)arg1;
-(id)stickerPresenter:(id)arg1 stickersAtTabIndex:(long long)arg2;
-(unsigned long long)numberOfPagesForPresenter:(id)arg1;
-(BOOL)stickerPresenter:(id)arg1 isSearchPageForIndex:(unsigned long long)arg2;

@end
