/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECAPIRequestBase.h>

@class NSString;

@interface ECAPIPaymentsRequest : ECAPIRequestBase {

	NSString* _categoryID;
	NSString* _locationID;

}

@property (nonatomic,retain) NSString * categoryID;              //@synthesize categoryID=_categoryID - In the implementation block
@property (nonatomic,retain) NSString * locationID;              //@synthesize locationID=_locationID - In the implementation block
-(void)setCategoryID:(NSString *)arg1 ;
-(void)setLocationID:(NSString *)arg1 ;
-(id)initWithCategoryID:(id)arg1 locationID:(id)arg2 ;
-(id)init;
-(NSString *)locationID;
-(NSString *)categoryID;
@end

