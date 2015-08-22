/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNValuePickerDataSource.h>

@class TFNPreferenceValue, NSString, NSArray;

@interface TFNPreferenceItem : NSObject <TFNValuePickerDataSource> {

	TFNPreferenceValue* _value;
	TFNPreferenceValue* _previousValue;
	NSString* _title;
	NSString* _userDefaultsKey;
	NSArray* _values;
	/*^block*/id _updateAction;

}

@property (nonatomic,retain) TFNPreferenceValue * value;                      //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) TFNPreferenceValue * previousValue;              //@synthesize previousValue=_previousValue - In the implementation block
@property (nonatomic,readonly) NSString * title;                              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * userDefaultsKey;                    //@synthesize userDefaultsKey=_userDefaultsKey - In the implementation block
@property (nonatomic,readonly) NSArray * values;                              //@synthesize values=_values - In the implementation block
@property (nonatomic,readonly) id updateAction;                               //@synthesize updateAction=_updateAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tfn_defaultDataViewAdapter;
-(id)valuesForPicker:(id)arg1 ;
-(id)initiallyPickedValueForPicker:(id)arg1 ;
-(id)initWithTitle:(id)arg1 userDefaultsKey:(id)arg2 titles:(id)arg3 values:(id)arg4 defaultValue:(id)arg5 updateAction:(/*^block*/id)arg6 ;
-(NSString *)title;
-(TFNPreferenceValue *)value;
-(void)setValue:(TFNPreferenceValue *)arg1 ;
-(NSArray *)values;
-(id)updateAction;
-(TFNPreferenceValue *)previousValue;
-(void)setPreviousValue:(TFNPreferenceValue *)arg1 ;
-(NSString *)userDefaultsKey;
@end
