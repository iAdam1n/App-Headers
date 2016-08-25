/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/DDLogFormatter.h>

@class DDLoggingContextSet, NSArray, NSString;

@interface DDContextBlacklistFilterLogFormatter : NSObject <DDLogFormatter> {

	DDLoggingContextSet* _contextSet;

}

@property (copy,readonly) NSArray * blacklist; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)formatLogMessage:(id)arg1 ;
-(BOOL)isOnBlacklist:(unsigned long long)arg1 ;
-(void)addToBlacklist:(unsigned long long)arg1 ;
-(void)removeFromBlacklist:(unsigned long long)arg1 ;
-(NSArray *)blacklist;
-(id)init;
@end

