/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:27 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKCompositeComponent.h>

@interface FBMediaSubscriptionsPageLikeCTABannerComponent : CKCompositeComponent {

	SEL _likeButtonAction;

}
+(id)newWithPage:(id)arg1 pageProfileImage:(id)arg2 pageProfileImageSideLength:(double)arg3 showSocialContext:(BOOL)arg4 likeButtonAction:(SEL)arg5 dismissButtonAction:(SEL)arg6 ;
+(id)initialState;
-(void)didTapPageLikeButton;
@end
