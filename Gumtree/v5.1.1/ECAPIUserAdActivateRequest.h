/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECAPIRequestBase.h>

@class NSString;

@interface ECAPIUserAdActivateRequest : ECAPIRequestBase {

	NSString* _adID;

}

@property (nonatomic,retain) NSString * adID;              //@synthesize adID=_adID - In the implementation block
-(NSString *)adID;
-(void)setAdID:(NSString *)arg1 ;
-(id)initWithAdID:(id)arg1 ;
-(id)init;
-(id)command;
@end

