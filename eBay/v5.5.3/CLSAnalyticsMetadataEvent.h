/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:15 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/CLSEventLogEvent.h>

@class NSDictionary;

@interface CLSAnalyticsMetadataEvent : CLSEventLogEvent

@property (nonatomic,copy,readonly) NSDictionary * metadataJSONData; 
-(NSDictionary *)metadataJSONData;
-(id)initWithPriority:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 metadataJSONData:(id)arg3 ;
-(id)initWithPriority:(unsigned long long)arg1 timestamp:(unsigned long long)arg2 key:(id)arg3 payload:(id)arg4 ;
@end
