/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/GTMLogFilter.h>

@class NSIndexSet, NSString;

@interface GSDK_GTMLogAllowedLevelFilter : NSObject <GTMLogFilter> {

	NSIndexSet* allowedLevels_;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)filterAllowsMessage:(id)arg1 level:(int)arg2 ;
-(id)initWithAllowedLevels:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

