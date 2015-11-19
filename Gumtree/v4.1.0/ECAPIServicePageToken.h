/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECServicePageToken.h>

@class NSString;

@interface ECAPIServicePageToken : NSObject <ECServicePageToken> {

	unsigned long long _currentItemCount;
	unsigned long long _pageOffset;
	unsigned long long _pageSize;
	unsigned long long _totalItemCount;

}

@property (assign,nonatomic) unsigned long long currentItemCount;              //@synthesize currentItemCount=_currentItemCount - In the implementation block
@property (assign,nonatomic) unsigned long long pageOffset;                    //@synthesize pageOffset=_pageOffset - In the implementation block
@property (assign,nonatomic) unsigned long long pageSize;                      //@synthesize pageSize=_pageSize - In the implementation block
@property (assign,nonatomic) unsigned long long totalItemCount;                //@synthesize totalItemCount=_totalItemCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL canLoadMore; 
+(id)tokenWithPageOffset:(unsigned long long)arg1 pageSize:(unsigned long long)arg2 totalItemCount:(unsigned long long)arg3 currentItemCount:(unsigned long long)arg4 ;
-(void)setPageOffset:(unsigned long long)arg1 ;
-(void)setCurrentItemCount:(unsigned long long)arg1 ;
-(unsigned long long)currentItemCount;
-(BOOL)canLoadMore;
-(void)setTotalItemCount:(unsigned long long)arg1 ;
-(unsigned long long)totalItemCount;
-(void)setPageSize:(unsigned long long)arg1 ;
-(unsigned long long)pageOffset;
-(unsigned long long)pageSize;
@end

