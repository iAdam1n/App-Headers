/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNLightweightActionButtonViewModel : FBValueObject <NSCopying> {

	NSString* _title;
	NSString* _emoji;
	NSString* _lightweightActionType;

}

@property (nonatomic,copy,readonly) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * emoji;                              //@synthesize emoji=_emoji - In the implementation block
@property (nonatomic,copy,readonly) NSString * lightweightActionType;              //@synthesize lightweightActionType=_lightweightActionType - In the implementation block
-(NSString *)lightweightActionType;
-(id)initWithTitle:(id)arg1 emoji:(id)arg2 lightweightActionType:(NSString*)arg3 ;
-(NSString *)emoji;
-(NSString *)title;
@end
