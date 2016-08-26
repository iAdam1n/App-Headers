/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNPaymentsActorProfileViewModel : FBValueObject <NSCopying> {

	BOOL _shouldShowBottomSeperator;
	NSString* _titleText;
	NSString* _displayNameText;
	NSString* _FBID;

}

@property (nonatomic,copy,readonly) NSString * titleText;                    //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayNameText;              //@synthesize displayNameText=_displayNameText - In the implementation block
@property (nonatomic,copy,readonly) NSString * FBID;                         //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowBottomSeperator;               //@synthesize shouldShowBottomSeperator=_shouldShowBottomSeperator - In the implementation block
-(NSString *)displayNameText;
-(id)initWithTitleText:(id)arg1 displayNameText:(id)arg2 FBID:(id)arg3 shouldShowBottomSeperator:(BOOL)arg4 ;
-(NSString *)FBID;
-(BOOL)shouldShowBottomSeperator;
-(NSString *)titleText;
@end
