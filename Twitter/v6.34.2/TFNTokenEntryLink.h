/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface TFNTokenEntryLink : NSObject {

	NSString* _token;
	unsigned long long _entryIndex;

}

@property (nonatomic,retain) NSString * token;                           //@synthesize token=_token - In the implementation block
@property (assign,nonatomic) unsigned long long entryIndex;              //@synthesize entryIndex=_entryIndex - In the implementation block
-(id)initWithToken:(id)arg1 entryIndex:(unsigned long long)arg2 ;
-(long long)compare:(id)arg1 ;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(void)setEntryIndex:(unsigned long long)arg1 ;
-(unsigned long long)entryIndex;
@end
