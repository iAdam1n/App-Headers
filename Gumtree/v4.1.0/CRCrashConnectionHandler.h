/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/CRConnectionHandler.h>

@class NSString, CRCrashArchive;

@interface CRCrashConnectionHandler : CRConnectionHandler {

	NSString* _path;
	CRCrashArchive* _crashArchive;

}

@property (retain) NSString * path;                            //@synthesize path=_path - In the implementation block
@property (retain) CRCrashArchive * crashArchive;              //@synthesize crashArchive=_crashArchive - In the implementation block
-(id)initWithCritterDelegate:(id)arg1 andCrashArchive:(id)arg2 andReportPath:(id)arg3 ;
-(void)handleResponse:(long long)arg1 andData:(id)arg2 ;
-(CRCrashArchive *)crashArchive;
-(void)setCrashArchive:(CRCrashArchive *)arg1 ;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(void)handleError:(id)arg1 ;
@end

