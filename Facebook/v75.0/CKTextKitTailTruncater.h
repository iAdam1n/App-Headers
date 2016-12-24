/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKTextKitTruncating.h>

@class CKTextKitContext, NSAttributedString, NSCharacterSet, NSString;

@interface CKTextKitTailTruncater : NSObject <CKTextKitTruncating> {

	CKTextKitContext* _context;
	NSAttributedString* _truncationAttributedString;
	NSCharacterSet* _avoidTailTruncationSet;
	CGSize _constrainedSize;
	vector<_NSRange, std::__1::allocator<_NSRange> >* _visibleRanges;
	CGRect _truncationStringRect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) vector<_NSRange visibleRanges;              //@synthesize visibleRanges=_visibleRanges - In the implementation block
@property (nonatomic,readonly) CGRect truncationStringRect;                //@synthesize truncationStringRect=_truncationStringRect - In the implementation block
-(vector<_NSRange)visibleRanges;
-(unsigned long long)_findTruncationInsertionPointAtOrBeforeCharacterIndex:(unsigned long long)arg1 layoutManager:(id)arg2 textStorage:(id)arg3 ;
-(unsigned long long)_calculateCharacterIndexBeforeTruncationMessage:(id)arg1 textStorage:(id)arg2 textContainer:(id)arg3 ;
-(id)initWithContext:(id)arg1 truncationAttributedString:(id)arg2 avoidTailTruncationSet:(id)arg3 constrainedSize:(CGSize)arg4 ;
-(void)_truncate;
-(CGRect)truncationStringRect;
@end
