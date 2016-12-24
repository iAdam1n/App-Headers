/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SolitaireFree/SolitaireFree-Structs.h>
@interface CBPersistenceStore : NSObject
+(void)persistDictionary:(id)arg1 inDirectory:(id)arg2 withName:(id)arg3 ;
+(void)persistObject:(id)arg1 inDirectory:(id)arg2 withName:(id)arg3 ;
+(void)deleteFileInDirectory:(id)arg1 withName:(id)arg2 ;
+(id)loadObjectInDirectory:(id)arg1 withName:(id)arg2 ;
+(id)namesOfFilesInDirectory:(id)arg1 ;
+(void)deleteDirectory:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)shared;
-(void)persistDictionary:(id)arg1 inDirectory:(id)arg2 withName:(id)arg3 ;
-(void)persistObject:(id)arg1 inDirectory:(id)arg2 withName:(id)arg3 ;
-(void)deleteFileInDirectory:(id)arg1 withName:(id)arg2 ;
-(id)loadObjectInDirectory:(id)arg1 withName:(id)arg2 ;
-(id)namesOfFilesInDirectory:(id)arg1 ;
-(void)writeObjectToFile:(id)arg1 inDirectory:(id)arg2 withName:(id)arg3 ;
-(id)createFileInDirectory:(id)arg1 withName:(id)arg2 ;
-(id)cachePathInDirectory:(id)arg1 withName:(id)arg2 ;
-(void)deleteItemsInDirectory:(id)arg1 biggerThan:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
