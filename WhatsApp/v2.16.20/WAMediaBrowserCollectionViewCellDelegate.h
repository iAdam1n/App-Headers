/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:45 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WAMediaBrowserCollectionViewCellDelegate <NSObject>
@required
-(UIEdgeInsets*)layoutInsetsForMediaBrowserCollectionViewCell:(id)arg1;
-(BOOL)isDisplayingMediaBrowserCollectionViewCellInFullScreen:(id)arg1;
-(void)mediaBrowserCollectionViewCell:(id)arg1 prefersFullScreen:(BOOL)arg2;
-(void)mediaBrowserCollectionViewCell:(id)arg1 didReceiveSingleTapAtPoint:(CGPoint)arg2;
-(void)mediaBrowserCollectionViewCellWillBeginChangingVisibleContentViewFrame:(id)arg1;
-(void)mediaBrowserCollectionViewCellDidChangeVisibleContentViewFrame:(id)arg1;
-(void)mediaBrowserCollectionViewCellDidEndChangingVisibleContentViewFrame:(id)arg1;
-(void)mediaBrowserCollectionViewCellDidChangePresentationState:(id)arg1;
-(void)mediaBrowserCollectionViewCellDidRequestPresentBackupSettings:(id)arg1;
-(BOOL)isPreviewingMediaBrowserCollectionViewCell:(id)arg1;
-(id)fastThumbnailForMediaBrowserCollectionViewCell:(id)arg1;
-(double)rateOfChangeForMediaBrowserCollectionViewCell:(id)arg1;
-(void)mediaBrowserCollectionViewCell:(id)arg1 didUpdateProgress:(double)arg2;

@end
