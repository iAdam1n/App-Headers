/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNContactSearchResultRanking.h>

@interface MNContactSearchAlphabeticalRankingScheme : NSObject <MNContactSearchResultRanking> {

	unsigned _sortOrder;

}
-(id)initWithSortOrder:(unsigned)arg1 ;
-(id)_comparisonStringForResult:(id)arg1 preppedDataSet:(id)arg2 ;
-(id)_comparisonStringForUser:(id)arg1 ;
-(id)_comparisonStringForAddressBookContact:(id)arg1 ;
-(id)rankResults:(id)arg1 preppedDataSet:(id)arg2 ;
-(id)init;
@end
