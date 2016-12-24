/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBTarotObservable, FBTarotToolbox;

@interface FBTarotFeedbackComponent : CKCompositeComponent {

	FBTarotObservable* _observableEntity;
	FBTarotToolbox* _toolbox;

}

@property (nonatomic,readonly) FBTarotObservable * observableEntity;              //@synthesize observableEntity=_observableEntity - In the implementation block
@property (nonatomic,readonly) FBTarotToolbox * toolbox;                          //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithObservableEntity:(id)arg1 toolbox:(id)arg2 ;
-(FBTarotToolbox *)toolbox;
-(void)_didTapOnShareButton;
-(void)_didTapOnCommentButton;
-(FBTarotObservable *)observableEntity;
@end
