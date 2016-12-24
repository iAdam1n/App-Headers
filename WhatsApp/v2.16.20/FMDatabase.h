/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:48 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WhatsApp/WhatsApp-Structs.h>
@class NSString, NSMutableDictionary, NSMutableSet, NSDateFormatter;

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
	double _busyTimeout;
	NSMutableDictionary* _cachedStatements;
	NSMutableSet* _openResultSets;
	NSMutableSet* _openFunctions;
	NSDateFormatter* _dateFormat;

}

@property (assign) BOOL traceExecution;                                 //@synthesize traceExecution=_traceExecution - In the implementation block
@property (assign) BOOL checkedOut;                                     //@synthesize checkedOut=_checkedOut - In the implementation block
@property (assign) double busyTimeout;                                  //@synthesize busyTimeout=_busyTimeout - In the implementation block
@property (assign) BOOL crashOnErrors;                                  //@synthesize crashOnErrors=_crashOnErrors - In the implementation block
@property (assign) BOOL logsErrors;                                     //@synthesize logsErrors=_logsErrors - In the implementation block
@property (retain) NSMutableDictionary * cachedStatements;              //@synthesize cachedStatements=_cachedStatements - In the implementation block
+(id)databaseWithPath:(id)arg1 ;
+(id)sqliteLibVersion;
+(BOOL)isSQLiteThreadSafe;
+(id)storeableDateFormat:(id)arg1 ;
-(sqlite3Ref)sqliteHandle;
-(id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2 ;
-(BOOL)openWithFlags:(int)arg1 ;
-(BOOL)beginDeferredTransaction;
-(BOOL)startSavePointWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)rollbackToSavePointWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)releaseSavePointWithName:(id)arg1 error:(id*)arg2 ;
-(id)inSavePoint:(/*^block*/id)arg1 ;
-(const char*)sqlitePath;
-(void)closeOpenResultSets;
-(BOOL)rekeyWithData:(id)arg1 ;
-(BOOL)setKeyWithData:(id)arg1 ;
-(id)errorWithMessage:(id)arg1 ;
-(void)warnInUse;
-(BOOL)hasDateFormatter;
-(id)executeQuery:(id)arg1 withArgumentsInArray:(id)arg2 orDictionary:(id)arg3 orVAList:(char*)arg4 ;
-(BOOL)databaseExists;
-(id)cachedStatementForQuery:(id)arg1 ;
-(void)bindObject:(id)arg1 toColumn:(int)arg2 inStatement:(sqlite3_stmtRef)arg3 ;
-(void)setCachedStatement:(id)arg1 forQuery:(id)arg2 ;
-(void)extractSQL:(id)arg1 argumentsList:(char*)arg2 intoString:(id)arg3 arguments:(id)arg4 ;
-(BOOL)executeUpdate:(id)arg1 error:(id*)arg2 withArgumentsInArray:(id)arg3 orDictionary:(id)arg4 orVAList:(char*)arg5 ;
-(BOOL)executeUpdate:(id)arg1 withArgumentsInArray:(id)arg2 ;
-(void)setCachedStatements:(NSMutableDictionary *)arg1 ;
-(void)setRetryTimeout:(double)arg1 ;
-(double)retryTimeout;
-(int)busyRetryTimeout;
-(void)setBusyRetryTimeout:(int)arg1 ;
-(BOOL)hasOpenResultSets;
-(void)resultSetDidClose:(id)arg1 ;
-(BOOL)rekey:(id)arg1 ;
-(BOOL)goodConnection;
-(id)executeQuery:(id)arg1 withParameterDictionary:(id)arg2 ;
-(id)executeQueryWithFormat:(id)arg1 ;
-(id)executeQuery:(id)arg1 withVAList:(char*)arg2 ;
-(BOOL)executeUpdate:(id)arg1 withParameterDictionary:(id)arg2 ;
-(BOOL)executeUpdate:(id)arg1 withVAList:(char*)arg2 ;
-(BOOL)executeUpdateWithFormat:(id)arg1 ;
-(BOOL)update:(id)arg1 withErrorAndBindings:(id*)arg2 ;
-(void)setShouldCacheStatements:(BOOL)arg1 ;
-(void)makeFunctionNamed:(id)arg1 maximumArguments:(int)arg2 withBlock:(/*^block*/id)arg3 ;
-(NSMutableDictionary *)cachedStatements;
-(BOOL)logsErrors;
-(void)setLogsErrors:(BOOL)arg1 ;
-(BOOL)crashOnErrors;
-(void)setCrashOnErrors:(BOOL)arg1 ;
-(double)busyTimeout;
-(void)setBusyTimeout:(double)arg1 ;
-(BOOL)checkedOut;
-(void)setCheckedOut:(BOOL)arg1 ;
-(BOOL)traceExecution;
-(void)setTraceExecution:(BOOL)arg1 ;
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
-(void)clearCachedStatements;
-(id)init;
-(void)dealloc;
-(void)setDateFormat:(id)arg1 ;
-(BOOL)commit;
-(id)stringFromDate:(id)arg1 ;
-(BOOL)close;
-(id)initWithPath:(id)arg1 ;
-(BOOL)setKey:(id)arg1 ;
-(id)dateFromString:(id)arg1 ;
-(BOOL)open;
-(BOOL)executeUpdate:(id)arg1 ;
-(BOOL)tableExists:(id)arg1 ;
-(BOOL)shouldCacheStatements;
-(BOOL)inTransaction;
-(id)executeQuery:(id)arg1 ;
-(BOOL)rollback;
-(id)stringForQuery:(id)arg1 ;
-(id)lastErrorMessage;
-(int)lastErrorCode;
-(id)databasePath;
-(BOOL)beginTransaction;
-(BOOL)hadError;
-(void)setUserVersion:(unsigned)arg1 ;
-(unsigned)userVersion;
-(long long)lastInsertRowId;
-(int)changes;
-(id)lastError;
-(unsigned)applicationID;
-(void)setApplicationID:(unsigned)arg1 ;
-(void)finalize;
@end
