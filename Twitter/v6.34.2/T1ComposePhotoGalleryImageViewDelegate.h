/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol T1ComposePhotoGalleryImageViewDelegate <NSObject>
@optional
-(BOOL)imageViewShouldBeginTrackingTouches:(id)arg1;
-(void)imageViewDidEndTrackingTouches:(id)arg1;
-(void)imageView:(id)arg1 didSelectAsset:(id)arg2;
-(void)imageView:(id)arg1 didSelectButton:(unsigned long long)arg2;
-(void)imageView:(id)arg1 didLongPressAsset:(id)arg2;
-(void)imageViewNeedsUpdateAccessibility:(id)arg1;

@required
-(long long)imageView:(id)arg1 badgeIndexForAsset:(id)arg2;
-(long long)imageView:(id)arg1 badgeIndexForButton:(unsigned long long)arg2;
-(void)imageView:(id)arg1 needsUpdateAnimatedGIFBadgeForAsset:(id)arg2;

@end

