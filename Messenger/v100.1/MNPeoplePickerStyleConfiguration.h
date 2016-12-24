/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNPeopleCellStyle;

@interface MNPeoplePickerStyleConfiguration : NSObject <NSCopying> {

	/*^block*/id _peoplePickerViewCreationBlock;
	MNPeopleCellStyle* _peopleCellStyle;

}

@property (nonatomic,copy,readonly) id peoplePickerViewCreationBlock;                 //@synthesize peoplePickerViewCreationBlock=_peoplePickerViewCreationBlock - In the implementation block
@property (nonatomic,copy,readonly) MNPeopleCellStyle * peopleCellStyle;              //@synthesize peopleCellStyle=_peopleCellStyle - In the implementation block
-(id)initWithPeopleCellStyle:(id)arg1 peoplePickerViewCreationBlock:(/*^block*/id)arg2 ;
-(id)peoplePickerViewCreationBlock;
-(MNPeopleCellStyle *)peopleCellStyle;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
