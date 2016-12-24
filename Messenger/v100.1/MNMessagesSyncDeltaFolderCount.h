/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:36 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableDictionary, NSString;

@interface MNMessagesSyncDeltaFolderCount : NSObject <TBase, NSCoding> {

	int __threadFolder;
	int __count;
	BOOL __hasMore;
	NSMutableDictionary* __counts;
	BOOL __threadFolder_isset;
	BOOL __count_isset;
	BOOL __hasMore_isset;
	BOOL __counts_isset;

}

@property (assign,setter=setThreadFolder:,getter=threadFolder,nonatomic) int threadFolder; 
@property (assign,setter=setCount:,getter=count,nonatomic) int count; 
@property (assign,setter=setHasMore:,getter=hasMore,nonatomic) BOOL hasMore; 
@property (setter=setCounts:,getter=counts,nonatomic,retain) NSMutableDictionary * counts; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(int)threadFolder;
-(BOOL)countsIsSet;
-(BOOL)countIsSet;
-(void)setHasMore:(BOOL)arg1 ;
-(void)unsetCount;
-(BOOL)hasMore;
-(BOOL)hasMoreIsSet;
-(void)unsetHasMore;
-(void)setThreadFolder:(int)arg1 ;
-(void)setCounts:(NSMutableDictionary *)arg1 ;
-(id)initWithThreadFolder:(int)arg1 count:(int)arg2 hasMore:(BOOL)arg3 counts:(id)arg4 ;
-(BOOL)threadFolderIsSet;
-(void)unsetThreadFolder;
-(void)unsetCounts;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(int)count;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setCount:(int)arg1 ;
-(void)validate;
-(NSMutableDictionary *)counts;
-(void)write:(id)arg1 ;
@end
