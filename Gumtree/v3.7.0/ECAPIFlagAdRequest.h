/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECAPIRequestBase.h>

@class NSString;

@interface ECAPIFlagAdRequest : ECAPIRequestBase {

	NSString* _reason;
	NSString* _comment;
	NSString* _email;

}

@property (nonatomic,retain) NSString * reason;               //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSString * comment;              //@synthesize comment=_comment - In the implementation block
@property (nonatomic,retain) NSString * email;                //@synthesize email=_email - In the implementation block
-(id)initWithReason:(id)arg1 withComment:(id)arg2 withEmail:(id)arg3 withAdID:(id)arg4 ;
-(id)httpBody;
-(void)setEmail:(NSString *)arg1 ;
-(id)init;
-(NSString *)reason;
-(void)setComment:(NSString *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(NSString *)comment;
-(NSString *)email;
@end

