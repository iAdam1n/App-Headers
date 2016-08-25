/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString;

@interface CRReporterConfiguration : NSManagedObject

@property (nonatomic,retain) NSNumber * enabled; 
@property (nonatomic,retain) NSString * reporterEntityName; 
@property (nonatomic,retain) NSNumber * sendFrequency; 
@property (nonatomic,retain) NSNumber * ttl; 
+(id)_PFPlaceHolderSingleton_core;
+(id)configurationInContext:(id)arg1 forReportableClass:(Class)arg2 ;
-(id)initWithContext:(id)arg1 reportableClass:(Class)arg2 sendFrequency:(double)arg3 enabled:(BOOL)arg4 ttl:(long long)arg5 ;
@end

