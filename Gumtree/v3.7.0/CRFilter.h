/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface CRFilter : NSObject {

	unsigned long long _filterType;
	NSString* _token;

}

@property (assign) unsigned long long filterType;              //@synthesize filterType=_filterType - In the implementation block
@property (copy) NSString * token;                             //@synthesize token=_token - In the implementation block
+(id)applyFilter:(unsigned long long)arg1 ToURL:(id)arg2 ;
+(id)queryOnlyFilterWithString:(id)arg1 ;
+(id)queryPreservingFilterWithString:(id)arg1 ;
+(id)filterWithString:(id)arg1 ;
-(BOOL)doesMatch:(id)arg1 ;
-(id)initWithString:(id)arg1 andFilterType:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)initWithString:(id)arg1 ;
-(unsigned long long)filterType;
-(void)setFilterType:(unsigned long long)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
@end
