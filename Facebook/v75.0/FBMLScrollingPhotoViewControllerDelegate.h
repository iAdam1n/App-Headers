/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:11 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMLScrollingPhotoViewControllerDelegate <NSObject>
@optional
-(BOOL)scrollingPhotoViewController:(id)arg1 isPhotoSelected:(id)arg2;
-(void)scrollingPhotoViewController:(id)arg1 didTapCheckOnPhoto:(id)arg2;

@required
-(void)scrollingPhotoViewControllerNeedsDismiss:(id)arg1 completion:(/*^block*/id)arg2;
-(id)scrollingPhotoViewController:(id)arg1 containerForPhotoIdentifier:(id)arg2;

@end
