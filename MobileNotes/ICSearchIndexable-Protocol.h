//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ICGenerateSearchIndexStringsOperation, ICSearchIndexerContext, NSArray, NSDate, NSDictionary, NSManagedObjectContext, NSString;

@protocol ICSearchIndexable <NSObject>
- (void)deleteFromNoteContextUsingIndexerContext:(ICSearchIndexerContext *)arg1;
- (NSString *)identifier;
- (_Bool)isHiddenFromSearch;
- (NSManagedObjectContext *)managedObjectContext;
- (NSDate *)modificationDate;
- (NSString *)objectIdentifier;
- (NSArray *)searchIndexStringsOutHasAdditionalStrings:(_Bool *)arg1;
- (NSString *)searchIndexableTitleUsingContentTextIfNecessary:(NSString *)arg1;
- (_Bool)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultsSection;
- (_Bool)shouldUpdateIndexForChangedValues:(NSDictionary *)arg1;
- (long long)visibilityTestingType;

@optional
- (ICGenerateSearchIndexStringsOperation *)generateSearchIndexStringsOperation;
@end

