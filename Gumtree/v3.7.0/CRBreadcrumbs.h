/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSOperationQueue, CritterImpl;

@interface CRBreadcrumbs : NSObject {

	BOOL _isDirty;
	BOOL _inAsyncBreadcrumbMode;
	NSMutableDictionary* _breadcrumbs;
	NSString* _backingFile;
	NSOperationQueue* _queue;
	CritterImpl* _critterDelegate;

}

@property (retain) NSMutableDictionary * breadcrumbs;              //@synthesize breadcrumbs=_breadcrumbs - In the implementation block
@property (retain) NSString * backingFile;                         //@synthesize backingFile=_backingFile - In the implementation block
@property (retain) NSOperationQueue * queue;                       //@synthesize queue=_queue - In the implementation block
@property (assign) CritterImpl * critterDelegate;                  //@synthesize critterDelegate=_critterDelegate - In the implementation block
-(void)leaveBreadcrumb:(id)arg1 ;
-(id)createBreadcrumb:(id)arg1 ;
-(id)convertToWindowsStyleTrail:(id)arg1 ;
-(id)getWindowsStyleCrumbs;
-(id)initWithCritterDelegate:(id)arg1 andBackingFile:(id)arg2 andQueue:(id)arg3 ;
-(void)shuffleBreadcrumbs;
-(void)setAsyncMode:(BOOL)arg1 ;
-(id)getCrumbs;
-(id)extractUserBreadcrumbsFrom:(double)arg1 toEndTime:(double)arg2 ;
-(id)getWindowsStyleShuffledPluginCrumbs;
-(NSMutableDictionary *)breadcrumbs;
-(void)setBreadcrumbs:(NSMutableDictionary *)arg1 ;
-(NSString *)backingFile;
-(void)setBackingFile:(NSString *)arg1 ;
-(CritterImpl *)critterDelegate;
-(void)setCritterDelegate:(CritterImpl *)arg1 ;
-(void)dealloc;
-(void)flush;
-(NSOperationQueue *)queue;
-(void)setQueue:(NSOperationQueue *)arg1 ;
@end
