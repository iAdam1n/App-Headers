/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class CRApp, NSManagedObjectContext;

@interface CRAppPlaceholder : NSProxy {

	CRApp* _app;
	NSManagedObjectContext* _context;

}

@property (retain) CRApp * app;                                   //@synthesize app=_app - In the implementation block
@property (retain) NSManagedObjectContext * context;              //@synthesize context=_context - In the implementation block
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(NSManagedObjectContext *)context;
-(id)initWithContext:(id)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
-(id)managedObjectContext;
-(CRApp *)app;
-(void)setApp:(CRApp *)arg1 ;
@end

