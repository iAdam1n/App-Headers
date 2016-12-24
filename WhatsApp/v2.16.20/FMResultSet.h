/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:48 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FMDatabase, FMStatement, NSString, NSMutableDictionary;

@interface FMResultSet : NSObject {

	FMDatabase* _parentDB;
	FMStatement* _statement;
	NSString* _query;
	NSMutableDictionary* _columnNameToIndexMap;

}

@property (retain) NSString * query;                                          //@synthesize query=_query - In the implementation block
@property (readonly) NSMutableDictionary * columnNameToIndexMap; 
@property (retain) FMStatement * statement;                                   //@synthesize statement=_statement - In the implementation block
+(id)resultSetWithStatement:(id)arg1 usingParentDatabase:(id)arg2 ;
-(long long)longLongIntForColumnIndex:(int)arg1 ;
-(int)wa_nextWithResultCode;
-(NSMutableDictionary *)columnNameToIndexMap;
-(id)objectForColumnName:(id)arg1 ;
-(id)objectForColumnIndex:(int)arg1 ;
-(int)columnIndexForName:(id)arg1 ;
-(long long)longForColumnIndex:(int)arg1 ;
-(unsigned long long)unsignedLongLongIntForColumnIndex:(int)arg1 ;
-(BOOL)boolForColumnIndex:(int)arg1 ;
-(id)dateForColumnIndex:(int)arg1 ;
-(id)dataNoCopyForColumnIndex:(int)arg1 ;
-(BOOL)columnIndexIsNull:(int)arg1 ;
-(const char*)UTF8StringForColumnIndex:(int)arg1 ;
-(void)kvcMagic:(id)arg1 ;
-(id)resultDict;
-(id)resultDictionary;
-(BOOL)hasAnotherRow;
-(int)intForColumn:(id)arg1 ;
-(long long)longForColumn:(id)arg1 ;
-(long long)longLongIntForColumn:(id)arg1 ;
-(unsigned long long)unsignedLongLongIntForColumn:(id)arg1 ;
-(BOOL)boolForColumn:(id)arg1 ;
-(double)doubleForColumn:(id)arg1 ;
-(id)stringForColumn:(id)arg1 ;
-(id)dateForColumn:(id)arg1 ;
-(id)dataForColumn:(id)arg1 ;
-(id)dataNoCopyForColumn:(id)arg1 ;
-(BOOL)columnIsNull:(id)arg1 ;
-(const char*)UTF8StringForColumnName:(id)arg1 ;
-(id)columnNameForIndex:(int)arg1 ;
-(void)setParentDB:(id)arg1 ;
-(BOOL)next;
-(void)dealloc;
-(id)objectAtIndexedSubscript:(int)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NSString *)query;
-(void)close;
-(void)setQuery:(NSString *)arg1 ;
-(id)dataForColumnIndex:(int)arg1 ;
-(id)stringForColumnIndex:(int)arg1 ;
-(int)intForColumnIndex:(int)arg1 ;
-(double)doubleForColumnIndex:(int)arg1 ;
-(void)setStatement:(FMStatement *)arg1 ;
-(FMStatement *)statement;
-(int)columnCount;
-(void)finalize;
@end
