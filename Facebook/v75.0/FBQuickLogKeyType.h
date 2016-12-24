/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBQuickLogKeyType : NSObject <NSCopying> {

	short _action;
	int _event;

}

@property (nonatomic,readonly) int event;                 //@synthesize event=_event - In the implementation block
@property (nonatomic,readonly) short action;              //@synthesize action=_action - In the implementation block
-(id)initWithEvent:(int)arg1 action:(short)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(short)action;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)event;
-(id)keyString;
@end
