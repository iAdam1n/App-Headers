/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBXDataObject.h>

@class NSString;

@interface EBXSavedSearch : EBXDataObject {

	BOOL _hasNewResults;
	NSString* _searchID;
	NSString* _keywords;

}

@property (nonatomic,copy) NSString * searchID;               //@synthesize searchID=_searchID - In the implementation block
@property (nonatomic,copy) NSString * keywords;               //@synthesize keywords=_keywords - In the implementation block
@property (assign,nonatomic) BOOL hasNewResults;              //@synthesize hasNewResults=_hasNewResults - In the implementation block
-(BOOL)hasNewResults;
-(void)setHasNewResults:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)setSearchID:(NSString *)arg1 ;
-(NSString *)searchID;
-(void)setKeywords:(NSString *)arg1 ;
-(NSString *)keywords;
@end
