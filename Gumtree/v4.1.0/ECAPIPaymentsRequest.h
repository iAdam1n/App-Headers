/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
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
-(void)setLocationID:(NSString *)arg1 ;
-(void)setCategoryID:(NSString *)arg1 ;
-(id)initWithCategoryID:(id)arg1 locationID:(id)arg2 ;
-(id)init;
-(NSString *)categoryID;
-(NSString *)locationID;
@end

