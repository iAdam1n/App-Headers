/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/JMOutlineCell.h>
#import <AlienBlue/JMTextFieldEntryDelegate.h>

@class JMTextFieldEntry, NSString;

@interface JMTextFieldEntryCell : JMOutlineCell <JMTextFieldEntryDelegate> {

	JMTextFieldEntry* _entryView;
	/*^block*/id _onComplete;
	/*^block*/id _onEndEditing;
	/*^block*/id _onCancel;

}

@property (retain) JMTextFieldEntry * entryView;                    //@synthesize entryView=_entryView - In the implementation block
@property (copy) id onComplete;                                     //@synthesize onComplete=_onComplete - In the implementation block
@property (copy) id onEndEditing;                                   //@synthesize onEndEditing=_onEndEditing - In the implementation block
@property (copy) id onCancel;                                       //@synthesize onCancel=_onCancel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightForNode:(id)arg1 tableView:(id)arg2 ;
-(void)createSubviews;
-(void)updateWithNode:(id)arg1 ;
-(void)textFieldEntry:(id)arg1 finishedWithString:(id)arg2 ;
-(void)textFieldEntryDidCancel:(id)arg1 ;
-(void)textFieldEntryDidEndEditing:(id)arg1 ;
-(id)onCancel;
-(void)setOnCancel:(id)arg1 ;
-(id)onEndEditing;
-(void)setOnEndEditing:(id)arg1 ;
-(JMTextFieldEntry *)entryView;
-(void)setEntryView:(JMTextFieldEntry *)arg1 ;
-(void)setOnComplete:(id)arg1 ;
-(id)onComplete;
@end

