/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(id)initWithCategoryID:(id)arg1 locationID:(id)arg2 ;
-(id)init;
-(NSString *)categoryID;
-(NSString *)locationID;
-(void)setLocationID:(NSString *)arg1 ;
@end
