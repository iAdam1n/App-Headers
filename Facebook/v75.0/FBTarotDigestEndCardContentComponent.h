/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class CKComponent;

@interface FBTarotDigestEndCardContentComponent : CKCompositeComponent {

	unsigned long long _subscribeStatus;
	/*^block*/id _setSubscribeStatus;
	CKComponent* _detailComponent;
	CKComponent* _followButtonComponent;
	CKComponent* _subscribeButtonComponent;

}

@property (nonatomic,readonly) unsigned long long subscribeStatus;                  //@synthesize subscribeStatus=_subscribeStatus - In the implementation block
@property (nonatomic,copy,readonly) id setSubscribeStatus;                          //@synthesize setSubscribeStatus=_setSubscribeStatus - In the implementation block
@property (nonatomic,readonly) CKComponent * detailComponent;                       //@synthesize detailComponent=_detailComponent - In the implementation block
@property (nonatomic,readonly) CKComponent * followButtonComponent;                 //@synthesize followButtonComponent=_followButtonComponent - In the implementation block
@property (nonatomic,readonly) CKComponent * subscribeButtonComponent;              //@synthesize subscribeButtonComponent=_subscribeButtonComponent - In the implementation block
+(id)newWithPageName:(id)arg1 subscribeStatus:(unsigned long long)arg2 setSubscribeStatus:(/*^block*/id)arg3 toolbox:(id)arg4 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(unsigned long long)subscribeStatus;
-(CKComponent *)detailComponent;
-(void)_didTapFollowButton;
-(void)_didTapSubscribeButton;
-(CKComponent *)followButtonComponent;
-(CKComponent *)subscribeButtonComponent;
-(id)setSubscribeStatus;
@end
