/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/DDLogFormatter.h>

@class NSMutableArray, NSArray, NSString;

@interface DDMultiFormatter : NSObject <DDLogFormatter> {

	dispatch_queue_sRef _queue;
	NSMutableArray* _formatters;

}

@property (readonly) NSArray * formatters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)formatLogMessage:(id)arg1 ;
-(id)logMessageForLine:(id)arg1 originalMessage:(id)arg2 ;
-(NSArray *)formatters;
-(void)addFormatter:(id)arg1 ;
-(void)removeFormatter:(id)arg1 ;
-(void)removeAllFormatters;
-(BOOL)isFormattingWithFormatter:(id)arg1 ;
-(id)init;
@end

