/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:04 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface ECAPISearchSuggestion : NSObject {

	NSString* _keyword;
	NSString* _localizedCategoryName;
	NSString* _categoryID;

}

@property (nonatomic,retain) NSString * keyword;                            //@synthesize keyword=_keyword - In the implementation block
@property (nonatomic,retain) NSString * localizedCategoryName;              //@synthesize localizedCategoryName=_localizedCategoryName - In the implementation block
@property (nonatomic,retain) NSString * categoryID;                         //@synthesize categoryID=_categoryID - In the implementation block
-(void)setCategoryID:(NSString *)arg1 ;
-(NSString *)keyword;
-(NSString *)localizedCategoryName;
-(void)setKeyword:(NSString *)arg1 ;
-(void)setLocalizedCategoryName:(NSString *)arg1 ;
-(id)description;
-(NSString *)categoryID;
@end

