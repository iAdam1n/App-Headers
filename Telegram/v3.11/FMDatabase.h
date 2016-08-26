/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Telegram/Telegram-Structs.h>
@class NSString, NSMutableDictionary, NSMutableSet;

@interface FMDatabase : NSObject {

	sqlite3Ref _db;
	NSString* _databasePath;
	BOOL _logsErrors;
	BOOL _crashOnErrors;
	BOOL _traceExecution;
	BOOL _checkedOut;
	BOOL _shouldCacheStatements;
	BOOL _isExecutingStatement;
	BOOL _inTransaction;
	int _busyRetryTimeout;
	NSMutableDictionary* _cachedStatements;
	NSMutableSet* _openResultSets;
	NSMutableSet* _openFunctions;

}

@property (assign,nonatomic) BOOL traceExecution;                                 //@synthesize traceExecution=_traceExecution - In the implementation block
@property (assign,nonatomic) BOOL checkedOut;                                     //@synthesize checkedOut=_checkedOut - In the implementation block
@property (assign,nonatomic) int busyRetryTimeout;                                //@synthesize busyRetryTimeout=_busyRetryTimeout - In the implementation block
@property (assign,nonatomic) BOOL crashOnErrors;                                  //@synthesize crashOnErrors=_crashOnErrors - In the implementation block
@property (assign,nonatomic) BOOL logsErrors;                                     //@synthesize logsErrors=_logsErrors - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedStatements;              //@synthesize cachedStatements=_cachedStatements - In the implementation block
+(id)databaseWithPath:(id)arg1 ;
+(id)sqliteLibVersion;
+(BOOL)isSQLiteThreadSafe;
-(id)getTableSchema:(id)arg1 ;
-(BOOL)columnExists:(id)arg1 inTableWithName:(id)arg2 ;
-(int)intForQuery:(id)arg1 ;
-(long long)longForQuery:(id)arg1 ;
-(BOOL)boolForQuery:(id)arg1 ;
-(double)doubleForQuery:(id)arg1 ;
-(id)dataForQuery:(id)arg1 ;
-(id)dateForQuery:(id)arg1 ;
-(id)getSchema;
-(BOOL)columnExists:(id)arg1 columnName:(id)arg2 ;
-(BOOL)validateSQL:(id)arg1 error:(id*)arg2 ;
-(BOOL)tableExists:(id)arg1 ;
-(id)stringForQuery:(id)arg1 ;
-(void)setSoftShouldCacheStatements:(BOOL)arg1 ;
-(void)setLogsErrors:(BOOL)arg1 ;
-(sqlite3Ref)sqliteHandle;
-(void)setShouldCacheStatements:(BOOL)arg1 ;
-(void)resultSetDidClose:(id)arg1 ;
-(int)busyRetryTimeout;
-(void)closeOpenResultSets;
-(id)errorWithMessage:(id)arg1 ;
-(void)warnInUse;
-(id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(char*)arg4 ;
-(BOOL)databaseExists;
-(id)cachedStatementForQuery:(id)arg1 ;
-(void)bindObject:(id)arg1 toColumn:(int)arg2 inStatement:(sqlite3_stmtRef)arg3 ;
-(void)setCachedStatement:(id)arg1 forQuery:(id)arg2 ;
-(void)extractSQL:(id)arg1 argumentsList:(char*)arg2 intoString:(id)arg3 arguments:(id)arg4 ;
-(id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2 ;
-(BOOL)executeUpdate:(id)arg1 error:(id*)arg2 withArgumentsInArray:(id)arg3 orDictionary:(id)arg4 orVAList:(char*)arg5 ;
-(BOOL)executeUpdate:(id)arg1 withArgumentsInArray:(id)arg2 ;
-(BOOL)startSavePointWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)rollbackToSavePointWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)releaseSavePointWithName:(id)arg1 error:(id*)arg2 ;
-(void)setCachedStatements:(NSMutableDictionary *)arg1 ;
-(BOOL)openWithFlags:(int)arg1 ;
-(BOOL)hasOpenResultSets;
-(BOOL)goodConnection;
-(long long)lastInsertRowId;
-(id)executeQuery:(id)arg1 withParameterDictionary:(id)arg2 ;
-(id)executeQueryWithFormat:(id)arg1 ;
-(BOOL)executeUpdate:(id)arg1 withParameterDictionary:(id)arg2 ;
-(BOOL)executeUpdateWithFormat:(id)arg1 ;
-(BOOL)update:(id)arg1 withErrorAndBindings:(id*)arg2 ;
-(BOOL)beginDeferredTransaction;
-(id)inSavePoint:(/*^block*/id)arg1 ;
-(void)makeFunctionNamed:(id)arg1 maximumArguments:(int)arg2 withBlock:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)cachedStatements;
-(BOOL)logsErrors;
-(BOOL)crashOnErrors;
-(void)setCrashOnErrors:(BOOL)arg1 ;
-(void)setBusyRetryTimeout:(int)arg1 ;
-(BOOL)checkedOut;
-(void)setCheckedOut:(BOOL)arg1 ;
-(BOOL)traceExecution;
-(void)setTraceExecution:(BOOL)arg1 ;
-(void)clearCachedStatements;
-(void)dealloc;
-(BOOL)commit;
-(BOOL)close;
-(id)initWithPath:(id)arg1 ;
-(BOOL)open;
-(BOOL)executeUpdate:(id)arg1 ;
-(BOOL)shouldCacheStatements;
-(BOOL)inTransaction;
-(id)executeQuery:(id)arg1 ;
-(BOOL)rollback;
-(id)lastErrorMessage;
-(int)lastErrorCode;
-(id)databasePath;
-(BOOL)beginTransaction;
-(BOOL)hadError;
-(int)changes;
-(id)lastError;
-(void)finalize;
@end
