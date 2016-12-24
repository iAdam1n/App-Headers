/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNOmniMNuxHeaderCellViewModel, MNOmniMNuxFooterCellViewModel, NSArray;

@interface MNOmniMNuxViewModel : FBValueObject <NSCoding, NSCopying> {

	MNOmniMNuxHeaderCellViewModel* _header;
	MNOmniMNuxFooterCellViewModel* _footer;
	NSArray* _cards;

}

@property (nonatomic,copy,readonly) MNOmniMNuxHeaderCellViewModel * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,copy,readonly) MNOmniMNuxFooterCellViewModel * footer;              //@synthesize footer=_footer - In the implementation block
@property (nonatomic,copy,readonly) NSArray * cards;                                     //@synthesize cards=_cards - In the implementation block
-(id)initWithHeader:(id)arg1 footer:(id)arg2 cards:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(MNOmniMNuxHeaderCellViewModel *)header;
-(NSArray *)cards;
-(MNOmniMNuxFooterCellViewModel *)footer;
@end
