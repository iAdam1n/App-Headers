/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/CRNetStatObserver.h>

@class CritterImpl, NSMutableArray, NSString, NSObject;

@interface CRNetCrumbs : NSObject <CRNetStatObserver> {

	unsigned long long myMaxEndpoints;
	BOOL isDirty;
	CritterImpl* _critterDelegate;
	NSMutableArray* _endpoints;
	NSString* _backingFile;
	NSObject* _backingFileLock;

}

@property (assign,nonatomic) CritterImpl * critterDelegate;              //@synthesize critterDelegate=_critterDelegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * endpoints;                 //@synthesize endpoints=_endpoints - In the implementation block
@property (nonatomic,retain) NSString * backingFile;                     //@synthesize backingFile=_backingFile - In the implementation block
@property (nonatomic,retain) NSObject * backingFileLock;                 //@synthesize backingFileLock=_backingFileLock - In the implementation block
-(NSString *)backingFile;
-(void)setBackingFile:(NSString *)arg1 ;
-(CritterImpl *)critterDelegate;
-(void)setCritterDelegate:(CritterImpl *)arg1 ;
-(void)logNetworkRequest:(id)arg1 ;
-(id)loadEndpoints;
-(id)initWithCritterDelegate:(id)arg1 andBackingFile:(id)arg2 andMaxEndpoints:(unsigned long long)arg3 ;
-(id)getEndpoints;
-(NSObject *)backingFileLock;
-(void)setBackingFileLock:(NSObject *)arg1 ;
-(void)flush;
-(id)enable;
-(NSMutableArray *)endpoints;
-(void)setEndpoints:(NSMutableArray *)arg1 ;
@end
