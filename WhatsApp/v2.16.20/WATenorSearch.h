/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAGIFSearch.h>

@interface WATenorSearch : WAGIFSearch
+(id)searchBarPlaceholder;
+(unsigned long long)maximumNumberOfBatchesToLoad;
+(unsigned long long)offsetForBatch:(unsigned long long)arg1 ;
+(unsigned long long)batchForOffset:(unsigned long long)arg1 ;
+(Class)searchResponseClass;
+(unsigned long long)batchSize;
-(id)newQueryWithText:(id)arg1 language:(id)arg2 batchToken:(id)arg3 completion:(/*^block*/id)arg4 ;
@end
