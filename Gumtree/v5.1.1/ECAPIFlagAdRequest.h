/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
-(id)httpBody;
-(id)initWithReason:(id)arg1 withComment:(id)arg2 withEmail:(id)arg3 withAdID:(id)arg4 ;
-(id)init;
-(NSString *)reason;
-(NSString *)comment;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)email;
-(void)setReason:(NSString *)arg1 ;
-(void)setComment:(NSString *)arg1 ;
@end

